// /Game/BP/Player/BP_IcarusCameraPawn.BP_IcarusCameraPawn_C
// Derives from: APawn > AActor > UObject
// size 0x290, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_IcarusCameraPawn_C : public APawn
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UCameraComponent* Camera;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0288, size 0x8
};
