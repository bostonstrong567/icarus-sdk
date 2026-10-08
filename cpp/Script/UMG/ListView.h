// /Script/UMG.ListView
// Derives from: UListViewBase > UWidget > UVisual > UObject
// size 0x368, declared in Engine/Source/Runtime/UMG/Public/Components/ListView.h

UCLASS()
class UListView : public UListViewBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<EOrientation> Orientation;  // 0x02D8, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) TEnumAsByte<ESelectionMode> SelectionMode;  // 0x02D9, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) EConsumeMouseWheel ConsumeMouseWheel;  // 0x02DA, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bClearSelectionOnClick;  // 0x02DB, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bIsFocusable;  // 0x02DC, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadOnly) float EntrySpacing;  // 0x02E0, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadOnly) bool bReturnFocusToSelection;  // 0x02E4, size 0x1
    UPROPERTY(Transient) TArray<UObject*> ListItems;  // 0x02E8, size 0x10
    UPROPERTY(BlueprintAssignable) FOnListEntryInitializedDynamic BP_OnEntryInitialized;  // 0x0308, size 0x10
    UPROPERTY(BlueprintAssignable) FSimpleListItemEventDynamic BP_OnItemClicked;  // 0x0318, size 0x10
    UPROPERTY(BlueprintAssignable) FSimpleListItemEventDynamic BP_OnItemDoubleClicked;  // 0x0328, size 0x10
    UPROPERTY(BlueprintAssignable) FOnItemIsHoveredChangedDynamic BP_OnItemIsHoveredChanged;  // 0x0338, size 0x10
    UPROPERTY(BlueprintAssignable) FOnListItemSelectionChangedDynamic BP_OnItemSelectionChanged;  // 0x0348, size 0x10
    UPROPERTY(BlueprintAssignable) FOnListItemScrolledIntoViewDynamic BP_OnItemScrolledIntoView;  // 0x0358, size 0x10

    // Not reflected: the engine's scripting cannot see these.
    TMulticastDelegate<void __cdecl(UObject *),FDefaultDelegateUserPolicy> OnItemClickedEvent;  // 0x0220, private
    TMulticastDelegate<void __cdecl(UObject *),FDefaultDelegateUserPolicy> OnItemDoubleClickedEvent;  // 0x0238, private
    TMulticastDelegate<void __cdecl(UObject *),FDefaultDelegateUserPolicy> OnItemSelectionChangedEvent;  // 0x0250, private
    TMulticastDelegate<void __cdecl(UObject *,bool),FDefaultDelegateUserPolicy> OnItemIsHoveredChangedEvent;  // 0x0268, private
    TMulticastDelegate<void __cdecl(UObject *,UUserWidget &),FDefaultDelegateUserPolicy> OnItemScrolledIntoViewEvent;  // 0x0280, private
    TMulticastDelegate<void __cdecl(float,float),FDefaultDelegateUserPolicy> OnListViewScrolledEvent;  // 0x0298, private
    TMulticastDelegate<void __cdecl(UObject *,bool),FDefaultDelegateUserPolicy> OnItemExpansionChangedEvent;  // 0x02B0, private
    TDelegate<TSubclassOf<UUserWidget> __cdecl(UObject *),FDefaultDelegateUserPolicy> OnGetEntryClassForItemDelegate;  // 0x02C8, private
    TSharedPtr<SListView<UObject *>,0> MyListView;  // 0x02F8, protected

    UFUNCTION(BlueprintCallable) void AddItem(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BP_CancelScrollIntoView();
    UFUNCTION(BlueprintCallable) void BP_ClearSelection();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 BP_GetNumItemsSelected() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) UObject* BP_GetSelectedItem() const;  // parameters 0x8
    UFUNCTION(BlueprintCallable) bool BP_GetSelectedItems(TArray<UObject*>& Items) const;  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) bool BP_IsItemVisible(UObject* Item) const;  // parameters 0x9
    UFUNCTION(BlueprintCallable) void BP_NavigateToItem(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BP_ScrollItemIntoView(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void BP_SetItemSelection(UObject* Item, bool bSelected);  // parameters 0x9
    UFUNCTION(BlueprintCallable) void BP_SetListItems(const TArray<UObject*>& InListItems);  // parameters 0x10
    UFUNCTION(BlueprintCallable) void BP_SetSelectedItem(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ClearListItems();
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetIndexForItem(UObject* Item) const;  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) UObject* GetItemAt(int32 Index) const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) TArray<UObject*> GetListItems() const;  // parameters 0x10
    UFUNCTION(BlueprintCallable, BlueprintPure) int32 GetNumItems() const;  // parameters 0x4
    UFUNCTION(BlueprintCallable, BlueprintPure) bool IsRefreshPending() const;  // parameters 0x1
    UFUNCTION(BlueprintCallable) void NavigateToIndex(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void RemoveItem(UObject* Item);  // parameters 0x8
    UFUNCTION(BlueprintCallable) void ScrollIndexIntoView(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSelectedIndex(int32 Index);  // parameters 0x4
    UFUNCTION(BlueprintCallable) void SetSelectionMode(TEnumAsByte<ESelectionMode> SelectionMode);  // parameters 0x1

    // Virtual functions that start here:
    //   OnItemsChanged
};
