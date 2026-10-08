// /Game/BP/UI/Talents/Blueprint/UMG_TalentRequiredIcon.UMG_TalentRequiredIcon_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D9, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_TalentRequiredIcon_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* Border_38;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* BorderBase;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UButton* Button_0;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Check;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* corner;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* talentIcon;  // 0x0290, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Tooltip_Text_Field;  // 0x0298, size 0x18, named "Tooltip Text Field"
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString DLCURL;  // 0x02B0, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FDLCPackageDataRowHandle DLCRequired;  // 0x02C0, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bHandled;  // 0x02D8, size 0x1

    UFUNCTION() void BndEvt__UMG_TalentRequiredIcon_Button_0_K2Node_ComponentBoundEvent_0_OnButtonClickedEvent__DelegateSignature();
    UFUNCTION(BlueprintCallable) void DevLocked(bool DLC);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_TalentRequiredIcon(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetupTalentRequired(TEnumAsByte<ERequiredTalentType> Type, bool Unlocked, FTalentsRowHandle Required_Talent, const TArray<FFlagsMultiRowHandle>& Required_Flags);  // parameters 0x30
};
