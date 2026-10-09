// /Script/Engine.AtmospherePrecomputeInstanceData
// size 0x160, declared in Engine/Source/Runtime/Engine/Classes/Atmosphere/AtmosphericFogComponent.h

USTRUCT()
struct FAtmospherePrecomputeInstanceData : public FSceneComponentInstanceData
{
public:
    FAtmospherePrecomputeParameters PrecomputeParameter;  // 0x00B8, not reflected
    FUntypedBulkData2<unsigned char> TransmittanceData;  // 0x00E8, not reflected
    FUntypedBulkData2<unsigned char> IrradianceData;  // 0x0110, not reflected
    FUntypedBulkData2<unsigned char> InscatterData;  // 0x0138, not reflected
};
