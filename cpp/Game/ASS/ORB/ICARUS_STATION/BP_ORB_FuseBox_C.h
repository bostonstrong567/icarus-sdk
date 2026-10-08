// /Game/ASS/ORB/ICARUS_STATION/BP_ORB_FuseBox.BP_ORB_FuseBox_C
// Derives from: AActor > UObject
// size 0x230, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ORB_FuseBox_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_Fuse;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0228, size 0x8
};
