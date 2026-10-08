// /Game/Prototypes/SpaceStationPlayer/Data/HabHandStateStruct.HabHandStateStruct
// size 0x30

USTRUCT()
struct HabHandStateStruct
{
    UPROPERTY(EditAnywhere, BlueprintReadWrite) TEnumAsByte<ESpaceHandGripMode> HandMode;  // 0x0000, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) bool Reaching;  // 0x0001, size 0x1
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeLocation;  // 0x0004, size 0xC
    UPROPERTY(EditAnywhere, BlueprintReadWrite) FVector RelativeNormal;  // 0x0010, size 0xC
    UPROPERTY(EditAnywhere, Instanced, BlueprintReadWrite) UPrimitiveComponent* Component;  // 0x0020, size 0x8
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HandDistance;  // 0x0028, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Created;  // 0x002C, size 0x4
};
