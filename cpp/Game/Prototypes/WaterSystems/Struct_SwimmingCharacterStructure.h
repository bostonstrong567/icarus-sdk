// /Game/Prototypes/WaterSystems/Struct_SwimmingCharacterStructure.Struct_SwimmingCharacterStructure
// size 0x20

USTRUCT()
struct Struct_SwimmingCharacterStructure
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) ACharacter* SwimmingCharacterReference;  // 0x0000, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float InitialSwimSpeed;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FRotator InitialSwimRotationRate;  // 0x000C, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) UPhysicsAsset* InitialPhysicsAsset;  // 0x0018, size 0x8
};
