// /Game/BP/PhotoCamera/UMG_CameraSetting_Resolution.UMG_CameraSetting_Resolution_C
// Derives from: UW_CameraEntry_GenericSlider_C > UW_PostProcessEntry_Slider_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x338, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_CameraSetting_Resolution_C : public UW_CameraEntry_GenericSlider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0330, size 0x8

    UFUNCTION() void ExecuteUbergraph_UMG_CameraSetting_Resolution(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) FText GetSliderText();  // parameters 0x18
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void UpdatePostProcess(FPostProcessSettings& Settings);  // parameters 0x560
};
