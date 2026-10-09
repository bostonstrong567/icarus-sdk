// /Script/Icarus.BTD_HasPerceivedTarget
// Derives from: UBTDecorator > UBTAuxiliaryNode > UBTNode > UObject
// size 0x80, declared in Icarus/Source/Icarus/AI/BT/Composites/BTD_HasPerceivedTarget.h

UCLASS()
class UBTD_HasPerceivedTarget : public UBTDecorator
{
    // C++ access is how this was written. A UPROPERTY stays visible to the engine's scripting either way.
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UAISense> SenseToUse;  // 0x0068, size 0x8
    UPROPERTY(EditAnywhere) bool bOnlyCountAliveTargets;  // 0x0070, size 0x1
    UPROPERTY(EditAnywhere) bool bFilterByRelationshipType;  // 0x0071, size 0x1
    UPROPERTY(EditAnywhere) ERelationshipType RelationshipType;  // 0x0072, size 0x1
protected:
    UPROPERTY() AAIController* OwnerAIController;  // 0x0078, size 0x8
};
