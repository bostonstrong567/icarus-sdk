// /Script/UMG.TreeView
// Derives from: UListView > UListViewBase > UWidget > UVisual > UObject
// size 0x3C0, declared in Engine/Source/Runtime/UMG/Public/Components/TreeView.h

UCLASS()
class UTreeView : public UListView
{
public:
    UPROPERTY(EditAnywhere) FOnGetItemChildrenDynamic BP_OnGetItemChildren;  // 0x0378, size 0x10
    UPROPERTY(BlueprintAssignable) FOnItemExpansionChangedDynamic BP_OnItemExpansionChanged;  // 0x0388, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TSharedPtr<STreeView<UObject *>,0> MyTreeView;  // 0x0368, protected
    TDelegate<void __cdecl(UObject *,TArray<UObject *,TSizedDefaultAllocator<32> > &),FDefaultDelegateUserPolicy> OnGetItemChildren;  // 0x0398, private
    TMulticastDelegate<void __cdecl(UObject *,bool),FDefaultDelegateUserPolicy> OnItemExpansionChangedEvent;  // 0x03A8, private

    UFUNCTION(BlueprintCallable) void CollapseAll();
    UFUNCTION(BlueprintCallable) void ExpandAll();
    UFUNCTION(BlueprintCallable) void SetItemExpansion(UObject* Item, bool bExpandItem);  // parameters 0x9
};
