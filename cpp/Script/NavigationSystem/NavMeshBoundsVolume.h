// /Script/NavigationSystem.NavMeshBoundsVolume
// Derives from: AVolume > ABrush > AActor > UObject
// size 0x260, declared in Engine/Source/Runtime/NavigationSystem/Public/NavMesh/NavMeshBoundsVolume.h

UCLASS(Config=Engine)
class ANavMeshBoundsVolume : public AVolume
{
public:
    UPROPERTY(EditAnywhere) FNavAgentSelector SupportedAgents;  // 0x0258, size 0x4
};
