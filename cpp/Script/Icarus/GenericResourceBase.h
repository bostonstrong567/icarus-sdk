// /Script/Icarus.GenericResourceBase
// Derives from: AIcarusActor > AActor > UObject
// size 0x2D8, declared in Icarus/Source/Icarus/Objects/GenericResourceBase.h

UCLASS(Config=Engine)
class AGenericResourceBase : public AIcarusActor, public IAISightTargetInterface
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) USceneComponent* ViewPointOverrideComponent;  // 0x02C8, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName ViewPointOverrideSocket;  // 0x02D0, size 0x8
};
