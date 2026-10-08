// /Game/BP/PhotoCamera/UMG_CameraSetting_Exposure.UMG_CameraSetting_Exposure_C
// Derives from: UW_CameraEntry_GenericSlider_C > UW_PostProcessEntry_Slider_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CameraSetting_Exposure_C : public UW_CameraEntry_GenericSlider_C
{
public:

    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
