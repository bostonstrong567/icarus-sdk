// /Script/Icarus.FlammableTarget
// size 0x28, declared in Icarus/Source/Icarus/Systems/Disaster/FlammableTarget.h

USTRUCT()
struct FFlammableTarget
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Actor;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UFLODFISMComponent* FISM;  // 0x0008, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) int32 FISMInstanceIndex;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Causer;  // 0x0018, size 0x8
    bool bIsValidTarget;  // 0x0020, not reflected
    bool bHasCheckedValidation;  // 0x0021, not reflected
};
