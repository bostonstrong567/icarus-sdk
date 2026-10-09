// /Script/AugmentedReality.ARGeoAnchorUpdatePayload
// size 0x70, declared in Engine/Source/Runtime/AugmentedReality/Public/ARComponent.h

USTRUCT()
struct FARGeoAnchorUpdatePayload
{
public:
    UPROPERTY(BlueprintReadOnly) FARSessionPayload SessionPayload;  // 0x0000, size 0x18
    UPROPERTY(BlueprintReadWrite) FTransform WorldTransform;  // 0x0020, size 0x30
    UPROPERTY(BlueprintReadOnly) float Longitude;  // 0x0050, size 0x4
    UPROPERTY(BlueprintReadOnly) float Latitude;  // 0x0054, size 0x4
    UPROPERTY(BlueprintReadOnly) float AltitudeMeters;  // 0x0058, size 0x4
    UPROPERTY(BlueprintReadOnly) EARAltitudeSource AltitudeSource;  // 0x005C, size 0x1
    UPROPERTY(BlueprintReadOnly) FString AnchorName;  // 0x0060, size 0x10
};
