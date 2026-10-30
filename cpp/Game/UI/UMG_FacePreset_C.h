// /Game/UI/UMG_FacePreset.UMG_FacePreset_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x298, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_FacePreset_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* Preset_1;  // 0x0268, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FFacePresetsRowHandle FacePresetRow;  // 0x0270, size 0x18
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FPresetClicked PresetClicked;  // 0x0288, size 0x10

    UFUNCTION() void BndEvt__UMG_FacePreset_Preset_1_K2Node_ComponentBoundEvent_0_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_FacePreset(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void PresetClicked__DelegateSignature(FFacePresetsRowHandle FacePresetRow);  // parameters 0x18
};
