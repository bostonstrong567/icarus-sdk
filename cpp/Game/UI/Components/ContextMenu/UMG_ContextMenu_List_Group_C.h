// /Game/UI/Components/ContextMenu/UMG_ContextMenu_List_Group.UMG_ContextMenu_List_Group_C
// Derives from: UUserWidget > UWidget > UVisual > UObject
// size 0x280, a blueprint class, widget

UCLASS(EditInlineNew, Config=Engine)
class UUMG_ContextMenu_List_Group_C : public UUserWidget
{
public:
    UPROPERTY(Transient) FPointerToUberGraphFrame UberGraphFrame;  // 0x0260, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* Divider;  // 0x0268, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UImage* GroupIcon;  // 0x0270, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UVerticalBox* ItemContainer;  // 0x0278, size 0x8

    UFUNCTION(BlueprintCallable) void AddItem(UUserWidget* ItemWidget);  // parameters 0x8
    UFUNCTION() void ExecuteUbergraph_UMG_ContextMenu_List_Group(int32 EntryPoint);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetGroupInfo(FContextMenuGroupType GroupType, bool ShowDivider);  // parameters 0x39
};
