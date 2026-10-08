// /Script/HairStrandsCore.GroomActor
// Derives from: AActor > UObject
// size 0x228, declared in Engine/Plugins/Runtime/HairStrands/Source/HairStrandsCore/Public/GroomActor.h

UCLASS(Config=Engine)
class AGroomActor : public AActor
{
public:
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadOnly) UGroomComponent* GroomComponent;  // 0x0220, size 0x8
};
