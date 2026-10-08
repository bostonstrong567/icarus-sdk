// /Game/UI/Components/UMG_OpenWorldSelection.UMG_OpenWorldSelection_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2F8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_OpenWorldSelection_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Transient, BlueprintReadOnly) UWidgetAnimation* Fade;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_BasicButton_2_C* BackButton;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BackImage;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UHorizontalBox* HorizontalBox_Terrains;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* LowerGradient;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Noise;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Pattern;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UScaleBox* ScaleBox_Styx;  // 0x02A0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldButton_C* UMG_OpenWorldButton_ARK;  // 0x02A8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldButton_C* UMG_OpenWorldButton_ELY;  // 0x02B0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldButton_C* UMG_OpenWorldButton_OLY;  // 0x02B8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldButton_C* UMG_OpenWorldButton_PRO;  // 0x02C0, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UUMG_OpenWorldButton_C* UMG_OpenWorldButton_STYX;  // 0x02C8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* UpperGradient;  // 0x02D0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FOpenWorldProspectSelected OpenWorldProspectSelected;  // 0x02D8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintAssignable, BlueprintReadWrite) FBackButtonPressed BackButtonPressed;  // 0x02E8, size 0x10

    UFUNCTION(BlueprintCallable) void BackButtonPressed__DelegateSignature();
    UFUNCTION() void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_PRO_K2Node_ComponentBoundEvent_0_ProspectSelected__DelegateSignature(FProspectListRowHandle Prospect);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_OpenWorldSelection_UMG_OpenWorldButton_STYX_K2Node_ComponentBoundEvent_2_ProspectSelected__DelegateSignature(FProspectListRowHandle Prospect);  // parameters 0x18
    UFUNCTION() void BndEvt__UMG_TerrainSelection_DevelopmentProspects_K2Node_ComponentBoundEvent_1_Clicked__DelegateSignature(UUMG_ButtonBase_C* Button);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ChangeImage(UTexture2D* Image);  // parameters 0x8
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_OpenWorldSelection(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void FadeAnimFinished();
    UFUNCTION(BlueprintCallable) void OpenWorldProspectSelected__DelegateSignature(FProspectListRowHandle Prospect);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void OpenWorldSelected(FProspectListRowHandle Prospect);  // parameters 0x18
};
