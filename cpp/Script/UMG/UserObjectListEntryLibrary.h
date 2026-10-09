// /Script/UMG.UserObjectListEntryLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/IUserObjectListEntry.h

UCLASS()
class UUserObjectListEntryLibrary : public UBlueprintFunctionLibrary
{
public:
    UFUNCTION(BlueprintCallable, BlueprintPure) static UObject* GetListItemObject(TScriptInterface<IUserObjectListEntry> UserObjectListEntry);  // parameters 0x18
};
