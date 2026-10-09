// /Script/UMG.UserObjectListEntry
// Derives from: UUserListEntry > UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/IUserObjectListEntry.h

UCLASS(Abstract)
class UUserObjectListEntry : public UUserListEntry
{
public:
    UFUNCTION(BlueprintImplementableEvent) void OnListItemObjectSet(UObject* ListItemObject);  // parameters 0x8
};
