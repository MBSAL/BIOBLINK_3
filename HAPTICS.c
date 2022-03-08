//Pinout Definitions--------SIO#-------PIN#--------------------------------
#define HAPTIC_PWM			//1  	// 13, IO, PWM; out 
#define BUCK_ON				//40	// 17, IO; out - LED 1
#define CURR_SET_PWM		//11	// 19, IO, PWM; out 
#define TX_EN				//25	// 23, IO; out - LED 2
#define MOD				    //14	// 27, IO, FREQ; out 
#define RX_EN				//17	// 28, IO; out - LED 3
#define BLINK				//12	// 29, IO, interrupt; in - Button 1
#define ENV_ADC				//3 	// 10, ADC; in
#define BAT_ADC				//31	// 12, ADC; in
#define PBSTAT				//28	// 36, IO; in
#define CHRG				//30	// 38, IO; in
#define BLK_THRES_PWM		//29	// 39, IO, PWM; out
#define SLOPE_P             //27    // 40, IO, in
#define SLOPE_N             //26    // 45, IO, in
#define DEBUG_LED           //7     // 15, IO, output, high drive, also UART_CTS.

#define DIGITAL_IN       1
#define DIGITAL_OUT      2
#define ANALOG_IN        3
#define LOW              0
#define HIGH             1
#define PWM              2
#define FREQ             3




function HAPTICS(BYVAL PATTERN_TYPE AS INTEGER)   //input an integer to select the haptic pattern

    SELECT PATTERN_TYPE

        CASE 1     
            GPIOWRITE(HAPTIC_PWM,1000)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,0)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,1000)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,0)
            DELAY_MS(400)
            GPIOWRITE(HAPTIC_PWM,1000)
            DELAY_MS(400)
            GPIOWRITE(HAPTIC_PWM,0)

        CASE 2
            GPIOWRITE(HAPTIC_PWM,1400)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,0)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,1200)
            DELAY_MS(400)
            GPIOWRITE(HAPTIC_PWM,0)
            DELAY_MS(400)
            GPIOWRITE(HAPTIC_PWM,1000)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,0)
            DELAY_MS(200)
            GPIOWRITE(HAPTIC_PWM,900)
            DELAY_MS(400)
            GPIOWRITE(HAPTIC_PWM,0)
                 
        CASE 3     
            
        //add paterns as needed.
            

    ENDSELECT

endfunc 1 