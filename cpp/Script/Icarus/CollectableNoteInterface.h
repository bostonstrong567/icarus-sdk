// /Script/Icarus.CollectableNoteInterface
// Derives from: UInterface > UObject
// size 0x28, declared in Icarus/Source/Icarus/Systems/Notes/CollectableNoteInterface.h

UCLASS(Abstract, MinimalAPI)
class UCollectableNoteInterface : public UInterface
{
public:
    UFUNCTION(BlueprintNativeEvent) FCollectableNotesRowHandle GetNoteRowHandle();  // parameters 0x18
    UFUNCTION(BlueprintNativeEvent) void SetNoteRowHandle(FCollectableNotesRowHandle& RowHandle);  // parameters 0x18
};
