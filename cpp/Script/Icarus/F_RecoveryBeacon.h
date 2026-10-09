// /Script/Icarus.RecoveryBeacon
// size 0x40, declared in Icarus/Intermediate/Build/Win64/IcarusServer/Inc/Icarus/RecoveryBeaconsLibrary.generated.h

USTRUCT()
struct FRecoveryBeacon : public FIcarusTableRowBase
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FText Display;  // 0x0018, size 0x18
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UTexture2D* MapIcon;  // 0x0030, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FColor Color;  // 0x0038, size 0x4
};
