// /Game/BP/Objects/World/Resources/Rocks/BP_VoxelRock.BP_VoxelRock_C
// Derives from: ABP_VoxelResource_Base_C > AVoxelResource > AIcarusActor > AActor > UObject
// size 0x618, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_VoxelRock_C : public ABP_VoxelResource_Base_C
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* Mesh;  // 0x0608, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UStaticMeshComponent* EditorMesh;  // 0x0610, size 0x8
};
