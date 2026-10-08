// /Script/Icarus.EnvQueryTest_WithinSettlementBounds
// Derives from: UEnvQueryTest > UEnvQueryNode > UObject
// size 0x200, declared in Icarus/Source/Icarus/AI/EQS/EnvQueryTest_WithinSettlementBounds.h

UCLASS()
class UEnvQueryTest_WithinSettlementBounds : public UEnvQueryTest
{
public:
    UPROPERTY(EditAnywhere) TSubclassOf<UEnvQueryContext> SettlementContext;  // 0x01F8, size 0x8
};
