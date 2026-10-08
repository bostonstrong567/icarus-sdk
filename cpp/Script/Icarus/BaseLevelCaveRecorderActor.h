// /Script/Icarus.BaseLevelCaveRecorderActor
// Derives from: AIcarusActor > AActor > UObject
// size 0x360, declared in Icarus/Source/Icarus/World/InstancedLevels/BaseLevelCaveRecorderActor.h

UCLASS(Config=Engine)
class ABaseLevelCaveRecorderActor : public AIcarusActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 CaveID;  // 0x02C0, size 0x4
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* SceneComponent;  // 0x02C8, size 0x8

    // Not reflected: the engine's scripting cannot see these.
    FInstancedLevelData InstancedData;  // 0x02D0, protected
    TArray<int,TSizedDefaultAllocator<32> > RetrievableRecorderUIDs;  // 0x0340, protected
    TArray<int,TSizedDefaultAllocator<32> > RetrievedRecorderUIDs;  // 0x0350, protected
};
