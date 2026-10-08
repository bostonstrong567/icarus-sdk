// /Game/ASS/ORB/ICARUS_STATION/BP_ORB_STN_FireExtinguisher.BP_ORB_STN_FireExtinguisher_C
// Derives from: AActor > UObject
// size 0x238, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_ORB_STN_FireExtinguisher_C : public AActor
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_FireExtinguisher_Tank;  // 0x0220, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* SM_ORB_STN_FireExtinguisher;  // 0x0228, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) UStaticMeshComponent* StaticMesh;  // 0x0230, size 0x8
};
