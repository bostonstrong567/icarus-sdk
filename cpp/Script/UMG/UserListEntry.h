// /Script/UMG.UserListEntry
// Derives from: UInterface > UObject
// size 0x28, declared in Engine/Source/Runtime/UMG/Public/Blueprint/IUserListEntry.h

UCLASS(Abstract)
class UUserListEntry : public UInterface
{
public:

    UFUNCTION(BlueprintImplementableEvent) void BP_OnEntryReleased();
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemExpansionChanged(bool bIsExpanded);  // parameters 0x1
    UFUNCTION(BlueprintImplementableEvent) void BP_OnItemSelectionChanged(bool bIsSelected);  // parameters 0x1
};
