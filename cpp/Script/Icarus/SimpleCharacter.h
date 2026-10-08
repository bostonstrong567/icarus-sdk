// /Script/Icarus.SimpleCharacter
// Derives from: ACharacter > APawn > AActor > UObject
// size 0x4D0, declared in Icarus/Source/Icarus/AI/SimpleCharacter.h

UCLASS(Config=Game)
class ASimpleCharacter : public ACharacter, public IAITargetable, public IAISightTargetInterface
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool bForceMaxLODWhenNotRendered;  // 0x04C8, size 0x1
};
