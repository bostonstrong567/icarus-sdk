// /Game/ASS/CHA/PHX/Customization/WB_ChaCustom_ColorButtons.WB_ChaCustom_ColorButtons_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x329, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UWB_ChaCustom_ColorButtons_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* B_01;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* ImageColor;  // 0x0270, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ST_ChaCustom_HairColors GradientColorData;  // 0x0278, size 0x48
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOnColorClicked OnColorClicked;  // 0x02C0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ST_ChaCustom_EyeColors SingleColorData;  // 0x02D0, size 0x58
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool UseGradient;  // 0x0328, size 0x1

    UFUNCTION() void BndEvt__WB_ChaCustom_ColorButtons_B_01_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_WB_ChaCustom_ColorButtons(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void OnColorClicked__DelegateSignature(int32 ColorID);  // parameters 0x4
};
