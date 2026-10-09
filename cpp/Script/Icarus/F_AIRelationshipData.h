// /Script/Icarus.AIRelationshipData
// size 0x48, declared in Icarus/Source/Icarus/DataStructs/AI/AIRelationshipData.h

USTRUCT()
struct FAIRelationshipData : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAIRelationshipsRowHandle> HostileRelationships;  // 0x0018, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAIRelationshipsRowHandle> NeutralRelationships;  // 0x0028, size 0x10
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TArray<FAIRelationshipsRowHandle> FriendlyRelationships;  // 0x0038, size 0x10
};
