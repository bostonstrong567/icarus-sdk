// /Script/Engine.ComponentSync
// size 0xC, declared in Engine/Source/Runtime/Engine/Classes/Components/LODSyncComponent.h

USTRUCT()
struct FComponentSync
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Name;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ESyncOption SyncOption;  // 0x0008, size 0x1
};
