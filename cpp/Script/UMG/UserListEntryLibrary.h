// /Script/UMG.UserListEntryLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/IUserListEntry.h

UCLASS()
class UUserListEntryLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static UListViewBase* GetOwningListView(TScriptInterface<IUserListEntry> UserListEntry);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsListItemExpanded(TScriptInterface<IUserListEntry> UserListEntry);  // parameters 0x11
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsListItemSelected(TScriptInterface<IUserListEntry> UserListEntry);  // parameters 0x11
};
