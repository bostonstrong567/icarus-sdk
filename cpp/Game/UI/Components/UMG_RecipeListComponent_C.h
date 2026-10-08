// /Game/UI/Components/UMG_RecipeListComponent.UMG_RecipeListComponent_C
// Derives from: UUMG_ListElement_C > UUserWidget > UWidget > UVisual > UObject
// size 0x310, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_RecipeListComponent_C : public UUMG_ListElement_C, public IUserListEntry
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x02E8, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UTextBlock* Text;  // 0x02F0, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 Count;  // 0x02F8, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FString Name;  // 0x0300, size 0x10

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent) void Construct();
    UFUNCTION() void ExecuteUbergraph_UMG_RecipeListComponent(int32 EntryPoint);  // parameters 0x4
};
