// /Game/BP/Objects/World/Items/Deployables/Defences/BP_ProxyPerceptionPawn.BP_ProxyPerceptionPawn_C
// Derives from: APawn > AActor > UObject
// size 0x290, a blueprint class, blueprint

UCLASS(Config=Game)
class ABP_ProxyPerceptionPawn_C : public APawn
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) UAIPerceptionComponent* AIPerception;  // 0x0280, size 0x8
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x0288, size 0x8
};
