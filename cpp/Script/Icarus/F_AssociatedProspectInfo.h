// /Script/Icarus.AssociatedProspectInfo
// size 0xD8, declared in Icarus/Source/Icarus/PlayerData/AssociatedProspects.h

USTRUCT()
struct FAssociatedProspectInfo
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FProspectInfo AssociatedProspect;  // 0x0000, size 0xA0
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FLastProspectHostInfo HostedBy;  // 0x00A0, size 0x38
};
