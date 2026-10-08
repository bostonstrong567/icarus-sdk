// /Game/UI/Components/UMG_ModifierDescription_Large.UMG_ModifierDescription_Large_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2B8, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ModifierDescription_Large_C : public UUserWidget, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* BottomDivider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BuffDescription;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* BuffName;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* BuffStatList;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Divider_2;  // 0x0288, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UBorder* ModifierBorder;  // 0x0290, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TopDivider;  // 0x0298, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TriggerText;  // 0x02A0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString BuffName;  // 0x02A8, size 0x10

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION() void ExecuteUbergraph_UMG_ModifierDescription_Large(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void InitialiseAffliction(FStatAfflictionsRowHandle Afflication);  // parameters 0x18
    UFUNCTION(BlueprintCallable) void InitialiseModifier(const FModifier& Modifier, int32 DurationModifier, int32 EffectivenessModifier);  // parameters 0x28
    UFUNCTION(BlueprintCallable) void InitialiseSeedTalent(const FModifier& Modifier, int32 Effectiveness);  // parameters 0x24
    UFUNCTION(BlueprintCallable) void SetActiveState(bool IsActive);  // parameters 0x1
};
