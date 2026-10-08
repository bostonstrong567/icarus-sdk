// /Game/BP/DropShipEditor/BP_DropShipEditorGameMode.BP_DropShipEditorGameMode_C
// Derives from: AGameMode > AGameModeBase > AInfo > AActor > UObject
// size 0x310, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ABP_DropShipEditorGameMode_C : public AGameMode
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0308, size 0x8
};
