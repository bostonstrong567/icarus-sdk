// /Game/UI/Components/UMG_AlterationDescription.UMG_AlterationDescription_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2BD, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_AlterationDescription_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Description;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USpacer* DescriptionSpacer;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Modifier;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ModifierList;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Name;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Stats;  // 0x0298, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool IsActive;  // 0x02A0, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FAlterationsEnum Alteration;  // 0x02A8, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Item;  // 0x02B8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Attachment;  // 0x02B9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideDivider;  // 0x02BA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideDescription;  // 0x02BB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool HideAfflictions;  // 0x02BC, size 0x1

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_AlterationDescription(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void Initialise(bool HideDivider);  // parameters 0x1
    UFUNCTION(BlueprintCallable) void Reinitalise(FAlterationsEnum Alteration, bool HideDivider);  // parameters 0x11
    UFUNCTION(BlueprintCallable) void Set_Active_State(bool Active);  // parameters 0x1, named "Set Active State"
};
