// /Script/LocationServicesBPLibrary.LocationServicesData
// size 0x18, declared in Engine/Plugins/Runtime/LocationServicesBPLibrary/Source/LocationServicesBPLibrary/Classes/LocationServicesBPLibrary.h

USTRUCT()
struct FLocationServicesData
{
public:
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Timestamp;  // 0x0000, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Longitude;  // 0x0004, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Latitude;  // 0x0008, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float HorizontalAccuracy;  // 0x000C, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float VerticalAccuracy;  // 0x0010, size 0x4
    UPROPERTY(EditAnywhere, BlueprintReadWrite) float Altitude;  // 0x0014, size 0x4
};
