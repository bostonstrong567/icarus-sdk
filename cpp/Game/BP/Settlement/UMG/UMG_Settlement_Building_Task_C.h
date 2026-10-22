// /Game/BP/Settlement/UMG/UMG_Settlement_Building_Task.UMG_Settlement_Building_Task_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x2D0, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_Settlement_Building_Task_C : public UUserWidget, public IUserObjectListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* Icon;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TaskInfo;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* TaskInfoIcon;  // 0x0278, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* TaskName;  // 0x0280, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FSettlementTaskInfo Task;  // 0x0288, size 0x48

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_Settlement_Building_Task(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void NPCTaskOverride(FSettlementNPCTaskTypesRowHandle NPCTask);  // parameters 0x18
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
