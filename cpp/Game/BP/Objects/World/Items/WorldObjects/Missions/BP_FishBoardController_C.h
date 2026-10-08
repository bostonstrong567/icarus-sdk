// /Game/BP/Objects/World/Items/WorldObjects/Missions/BP_FishBoardController.BP_FishBoardController_C
// Derives from: AFishBoardController > AIcarusActor > AActor > UObject
// size 0x2F8, a blueprint class, blueprint

UCLASS(Config=Engine)
class ABP_FishBoardController_C : public AFishBoardController
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02F0, size 0x8
};
