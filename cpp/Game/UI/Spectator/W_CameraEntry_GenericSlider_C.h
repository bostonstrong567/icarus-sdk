// /Game/UI/Spectator/W_CameraEntry_GenericSlider.W_CameraEntry_GenericSlider_C
// Derives from: UW_PostProcessEntry_Slider_C > UW_PostProcessEntry_C > UUserWidget > UWidget > UVisual > UObject
// size 0x330, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UW_CameraEntry_GenericSlider_C : public UW_PostProcessEntry_Slider_C
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0320, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MinValue;  // 0x0328, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float MaxValue;  // 0x032C, size 0x4

    UFUNCTION() void ExecuteUbergraph_W_CameraEntry_GenericSlider(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitFromDefaultValue();
    UFUNCTION(BlueprintCallable) void InitFromSaveGameValue(FPostProcessSaveData Value);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void PreConstruct(bool IsDesignTime);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void SetupSliderValues();
};
