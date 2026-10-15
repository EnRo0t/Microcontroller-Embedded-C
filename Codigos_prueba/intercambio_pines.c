// --- CÓDIGO DEL CURSO (Discovery - STM32F407) ---
while (1)
{
    // Si se presiona el botón en PA0
    if (HAL_GPIO_ReadPin(GPIOA, GPIO_PIN_0) == GPIO_PIN_SET) 
    {
        // Enciende el LED en PC13
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_SET);
    }
    else
    {
        // Apaga el LED
        HAL_GPIO_WritePin(GPIOC, GPIO_PIN_13, GPIO_PIN_RESET);
    }
}
