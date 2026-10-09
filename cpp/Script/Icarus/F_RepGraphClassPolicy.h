// /Script/Icarus.RepGraphClassPolicy
// size 0x70, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/RepGraphClassPoliciesLibrary.generated.h

USTRUCT()
struct FRepGraphClassPolicy : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere) TSoftClassPtr<AActor> Class;  // 0x0018, size 0x28
    UPROPERTY(EditAnywhere) FString Description;  // 0x0040, size 0x10
    UPROPERTY(EditAnywhere) EClassRepPolicy Policy;  // 0x0050, size 0x1
    UPROPERTY(EditAnywhere) FRepGraphClassSettingsRowHandle Settings;  // 0x0054, size 0x18
};
