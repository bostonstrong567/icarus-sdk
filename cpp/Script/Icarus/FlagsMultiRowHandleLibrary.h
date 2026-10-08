// /Script/Icarus.FlagsMultiRowHandleLibrary
// Derives from: UBlueprintFunctionLibrary > UObject
// size 0x28, declared in Icarus/Source/Icarus/IcarusGenerated/Flags/FlagsMultiRowHandleLibrary.h

UCLASS()
class UFlagsMultiRowHandleLibrary : public UBlueprintFunctionLibrary
{
public:

    UFUNCTION(BlueprintCallable, BlueprintPure) static void Break(FFlagsMultiRowHandle MultiRowHandle, EFlagsTableType& OutEnum, FName& OutName);  // parameters 0x24
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlagsMultiRowHandleFAccountFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FAccountFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlagsMultiRowHandleFCharacterFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FCharacterFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlagsMultiRowHandleFDLCPackageDataRowHandle(FFlagsMultiRowHandle MultiHandle, FDLCPackageDataRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlagsMultiRowHandleFSessionFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FSessionFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool EqualEqual_FlagsMultiRowHandleFlagsMultiRowHandle(FFlagsMultiRowHandle A, FFlagsMultiRowHandle B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlagsMultiRowHandle FromAccountFlagsRowHandle(FAccountFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlagsMultiRowHandle FromCharacterFlagsRowHandle(FCharacterFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlagsMultiRowHandle FromDLCPackageDataRowHandle(FDLCPackageDataRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlagsMultiRowHandle FromSessionFlagsRowHandle(FSessionFlagsRowHandle RowHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable) static void GetAccountFlagsStruct(FFlagsMultiRowHandle MultiHandle, FAccountFlag& AccountFlagsStruct, EValid& Paths);  // parameters 0x81
    UFUNCTION(BlueprintCallable) static void GetCharacterFlagsStruct(FFlagsMultiRowHandle MultiHandle, FCharacterFlag& CharacterFlagsStruct, EValid& Paths);  // parameters 0x49
    UFUNCTION(BlueprintCallable) static void GetDLCPackageDataStruct(FFlagsMultiRowHandle MultiHandle, FDLCPackageData& DLCPackageDataStruct, EValid& Paths);  // parameters 0x119
    UFUNCTION(BlueprintCallable, BlueprintPure) static FRowMetadata GetMetadata(FFlagsMultiRowHandle MultiRowHandle);  // parameters 0xA0
    UFUNCTION(BlueprintCallable) static void GetSessionFlagsStruct(FFlagsMultiRowHandle MultiHandle, FSessionFlag& SessionFlagsStruct, EValid& Paths);  // parameters 0x31
    UFUNCTION() static uint8 GetTableIndexByName(FName TableName);  // parameters 0x9
    UFUNCTION() static FName GetTableNameByIndex(uint8 TableIndex);  // parameters 0xC
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsNone(FFlagsMultiRowHandle MultiRowHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool IsValid(FFlagsMultiRowHandle MultiRowHandle);  // parameters 0x19
    UFUNCTION(BlueprintCallable, BlueprintPure) static FFlagsMultiRowHandle Make(EFlagsTableType Enum, FName RowName);  // parameters 0x28
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlagsMultiRowHandleFAccountFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FAccountFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlagsMultiRowHandleFCharacterFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FCharacterFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlagsMultiRowHandleFDLCPackageDataRowHandle(FFlagsMultiRowHandle MultiHandle, FDLCPackageDataRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlagsMultiRowHandleFSessionFlagsRowHandle(FFlagsMultiRowHandle MultiHandle, FSessionFlagsRowHandle RowHandle);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static bool NotEqual_FlagsMultiRowHandleFlagsMultiRowHandle(FFlagsMultiRowHandle A, FFlagsMultiRowHandle B);  // parameters 0x31
    UFUNCTION(BlueprintCallable, BlueprintPure) static FAccountFlagsRowHandle ToAccountFlagsRowHandle(FFlagsMultiRowHandle MultiHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FCharacterFlagsRowHandle ToCharacterFlagsRowHandle(FFlagsMultiRowHandle MultiHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FDLCPackageDataRowHandle ToDLCPackageDataRowHandle(FFlagsMultiRowHandle MultiHandle);  // parameters 0x30
    UFUNCTION(BlueprintCallable, BlueprintPure) static FSessionFlagsRowHandle ToSessionFlagsRowHandle(FFlagsMultiRowHandle MultiHandle);  // parameters 0x30
};
