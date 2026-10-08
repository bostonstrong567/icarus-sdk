// /Game/Developers/samprebble/TRAILERDEV/TrailerGameMode.TrailerGameMode_C
// Derives from: AGameModeBase > AInfo > AActor > UObject
// size 0x2C8, a blueprint class, blueprint

UCLASS(Transient, NotPlaceable, Config=Game)
class ATrailerGameMode_C : public AGameModeBase
{
public:
    UPROPERTY(Instanced, BlueprintReadWrite) USceneComponent* DefaultSceneRoot;  // 0x02C0, size 0x8
};
