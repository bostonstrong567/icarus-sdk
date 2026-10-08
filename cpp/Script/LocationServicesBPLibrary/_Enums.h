// /Script/LocationServicesBPLibrary.ELocationAccuracy
UENUM()
enum class ELocationAccuracy : uint8
{
    LA_ThreeKilometers = 0,
    LA_OneKilometer = 1,
    LA_HundredMeters = 2,
    LA_TenMeters = 3,
    LA_Best = 4,
    LA_Navigation = 5,
};
