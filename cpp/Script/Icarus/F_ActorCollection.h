// /Script/Icarus.ActorCollection
// size 0x10, declared in Icarus/Source/Icarus/Systems/Weather/WeatherController.h

USTRUCT()
struct FActorCollection
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AIcarusActor*> Actors;  // 0x0000, size 0x10
};
