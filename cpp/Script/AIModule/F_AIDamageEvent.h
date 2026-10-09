// /Script/AIModule.AIDamageEvent
// size 0x38, declared in Engine/Source/Runtime/AIModule/Classes/Perception/AISense_Damage.h

USTRUCT()
struct FAIDamageEvent
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Amount;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector Location;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector HitLocation;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* DamagedActor;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) AActor* Instigator;  // 0x0028, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FName Tag;  // 0x0030, size 0x8
};
