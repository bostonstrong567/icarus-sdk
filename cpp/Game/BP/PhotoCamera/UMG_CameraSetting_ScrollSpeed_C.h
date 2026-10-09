// /Game/BP/PhotoCamera/UMG_CameraSetting_ScrollSpeed.UMG_CameraSetting_ScrollSpeed_C
// Derives from: UW_CameraEntry_GenericSlider_C > UW_PostProcessEntry_Slider_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CameraSetting_ScrollSpeed_C : public UW_CameraEntry_GenericSlider_C
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) float GetSliderValue();  // parameters 0x4
};
