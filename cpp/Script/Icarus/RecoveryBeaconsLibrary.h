// /Script/Icarus.RecoveryBeaconsLibrary
// Derives from: URowLibrary > UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/RecoveryBeacons/RecoveryBeaconsLibrary.h

UCLASS()
class URecoveryBeaconsLibrary : public URowLibrary
{
public:

    UFUNCTION(BlueprintCallable) static void AddRowToRecoveryBeaconsTable(FName Name, FRecoveryBeacon Data, FRecoveryBeaconsRowHandle& NewRow, bool bOverrideExistingRow);  // parameters 0x61
    UFUNCTION(BlueprintCallable, BlueprintPure) static void BreakRecoveryBeaconsEnum(FRecoveryBeaconsEnum Enum, FName& Name, int32& Index);  // parameters 0x1C
    UFUNCTION(BlueprintCallable) static FRecoveryBeaconsRowHandle CastToRecoveryBeaconsRowHandle(FRowHandle RowHandle, EValid& Paths);  // parameters 0x34
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_EnumEnum(FRecoveryBeaconsEnum A, FRecoveryBeaconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FRecoveryBeaconsRowHandleFRecoveryBeaconsRowHandle(FRecoveryBeaconsRowHandle RowHandleA, FRecoveryBeaconsRowHandle RowHandleB);  // parameters 0x31
    UFUNCTION(BlueprintCallable) static void GetRecoveryBeaconsStruct(FRecoveryBeaconsRowHandle RowHandle, FRecoveryBeacon& RecoveryBeacons, EValid& Paths);  // parameters 0x59
    UFUNCTION() static FName IntToName(int32 IntValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsEnum IntToStruct(int32 IntValue);  // parameters 0x18
    UFUNCTION() static bool IsValidName(FName NameValue);  // parameters 0x9
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsRowHandle MakeLiteralRecoveryBeacons(FRecoveryBeaconsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsRowHandle MakeRecoveryBeacons(FName RowName);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsEnum MakeRecoveryBeaconsEnum(FRecoveryBeaconsEnum Enum);  // parameters 0x20
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsRowHandle MakeRecoveryBeaconsFromIndex(int32 Index);  // parameters 0x1C
    UFUNCTION() static int32 NameToInt(FName NameValue);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsEnum NameToStruct(FName NameValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumEnum(FRecoveryBeaconsEnum A, FRecoveryBeaconsEnum B);  // parameters 0x21
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_EnumName(FRecoveryBeaconsEnum A, FName B);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 NumRows();  // parameters 0x4
    UFUNCTION() static void RefreshConstants();
    UFUNCTION(BlueprintCallable) static void RemoveRowFromRecoveryBeaconsTable(FName Name);  // parameters 0x8
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsEnum RowHandleToStruct(FRecoveryBeaconsRowHandle RowHandle);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static int32 StructToInt(FRecoveryBeaconsEnum EnumValue);  // parameters 0x14
    UFUNCTION(BlueprintCallable, BlueprintPure) static FName StructToName(FRecoveryBeaconsEnum EnumValue);  // parameters 0x18
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRecoveryBeaconsRowHandle StructToRowHandle(FRecoveryBeaconsEnum EnumValue);  // parameters 0x28
};
