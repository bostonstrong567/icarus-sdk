// /Script/Engine.MaterialInstanceActor
// Derives from: AActor > UObject
// size 0x230, declared in Engine/Source/Runtime/Engine/Classes/Materials/MaterialInstanceActor.h

UCLASS(MinimalAPI, Config=Engine)
class AMaterialInstanceActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<AActor*> TargetActors;  // 0x0220, size 0x10
};
